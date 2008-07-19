/*
 * PROJECT:     ReactOS Sound System "MME Buddy" Library
 * LICENSE:     GPL - See COPYING in the top level directory
 * FILE:        lib/sound/mmebuddy/midi/midMessage.c
 *
 * PURPOSE:     Provides the midMessage exported function, as required by
 *              the MME API, for MIDI input device support.
 *
 * PROGRAMMERS: Andrew Greenwood (silverblade@reactos.org)
*/

#include <windows.h>
#include <mmsystem.h>
#include <mmddk.h>

#include <ntddsnd.h>

#include <mmebuddy.h>

APIENTRY DWORD
midMessage(
    DWORD DeviceId,
    DWORD Message,
    DWORD PrivateHandle,
    DWORD Parameter1,
    DWORD Parameter2)
{
    MMRESULT Result = MMSYSERR_NOERROR;

    AcquireEntrypointMutex(MIDI_IN_DEVICE_TYPE);

    switch ( Message )
    {
        case MIDM_GETNUMDEVS :
        {
            Result = GetSoundDeviceCount(MIDI_IN_DEVICE_TYPE);
            break;
        }
    }

    ReleaseEntrypointMutex(MIDI_IN_DEVICE_TYPE);

    return Result;
}
