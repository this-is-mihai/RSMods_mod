#include "Logging.hpp"

#ifdef _WWISE_LOGS
namespace Wwise::Logging {

	/// <summary>
	/// Console print out for Wwise::SoundEngine::PostEvent()
	/// </summary>
	/// <param name="eventName"> - Name of the event being posted</param>
	/// <param name="gameObject"> - Object to post the event to</param>
	void __stdcall log_PostEvent_Name(char* eventName, int gameObject) {
		std::cout << "(Wwise) PostEvent: " << eventName << " on game object 0x" << std::hex << gameObject << std::endl;
	}

	/// <summary>
	/// x86 Assembly hook to allow us to log Wwise::SoundEngine::PostEvent()
	/// </summary>
	void __declspec(naked) hook_log_PostEvent() {
		__asm {
			push ESI	// Save current state of ESI to the stack.
			push EAX	// Save current state of EAX to the stack.
			push ESP	// Save current state of ESP to the stack.

			push[EBP + 0xC]			// Wwise Object
			push[EBP + 0x8]			// Wwise Event name.
			call log_PostEvent_Name	// Log the event name

			pop ESP	// Get old ESP
			pop EAX	// Get old EAX
			pop ESI // Get old ESI

			mov ESI, EAX  // Assembly we removed to place this hook
			add ESP, 0x20 // Assembly we removed to place this hook
			jmp Offsets::ptr_Wwise_Log_PostEventHookJmpBck  // Jump back to the original code.
		}
	}

	/// <summary>
	/// Place x86 Assembly hook for logging Wwise::SoundEngine::PostEvent() calls.
	/// </summary>
	void Setup_log_PostEvent() {
		MemUtil::PlaceHook((void*)Offsets::ptr_Wwise_Log_PostEventHook, hook_log_PostEvent, 5);
	}

	/// <summary>
	/// Console print out for Wwise::SoundEngine::SetRTPCValue()
	/// </summary>
	/// <param name="rtpcName"> - Name of RTPC that we are changing</param>
	/// <param name="rtpcValue"> - Value we are changing the RTPC to</param>
	/// <param name="gameObject"> - Object wherw we are changing the RTPC</param>
	void __stdcall log_SetRTPCValue(char* rtpcName, float rtpcValue, int gameObject) {
		if (!strcmp(rtpcName, "Player_Success") ||
			!strcmp(rtpcName, "Portal_Size") ||
			!strcmp(rtpcName, "LoftAmb_CamPosition") ||
			!strcmp(rtpcName, "AmbRadio_OnOff_Return") ||
			!strcmp(rtpcName, "Average_Song_Difficulty") ||
			!strcmp(rtpcName, "Lowest_Phrase_Difficulty_Level") ||
			!strcmp(rtpcName, "PortalClose_TailLP_Return") ||
			!strcmp(rtpcName, "PortalClose_TailRamping_Return") ||
			!strcmp(rtpcName, "P1_Instrument_Volume") ||
			!strcmp(rtpcName, "GateTime") ||
			!strcmp(rtpcName, "P1_Streak_Hit_Count") ||
			!strcmp(rtpcName, "P1_Streak_Miss") ||
			!strcmp(rtpcName, "P1_Streak_Note_Count") ||
			!strcmp(rtpcName, "P1_Streak_Chord_Count") ||
			!strcmp(rtpcName, "P1_Streak_Phrase_Count") ||
			!strcmp(rtpcName, "P2_Instrument_Volume") ||
			!strcmp(rtpcName, "MusicRamping")
			)
			return; // To prevent spamming of the log. If you need to look at these, remove the if-statement.

		std::cout << "(Wwise) SetRTPCValue: " << rtpcName << " to " << rtpcValue << " on game object 0x" << std::hex << gameObject << std::endl;
	}

	/// <summary>
	/// x86 Assembly hook to allow us to log Wwise::SoundEngine::SetRTPCValue()
	/// </summary>
	void __declspec(naked) hook_log_SetRTPCValue() {
		__asm {
			push ESP // Save current state of ESP to the stack.
			push EAX // Save current state of EAX to the stack.

			push[EBP + 0x10] // RTPC Object
			push[EBP + 0xC]	// RTPC Value
			push[EBP + 0x8]	// RTPC Name
			call log_SetRTPCValue

			pop EAX // Get old EAX
			pop ESP // Get old ESP

			add ESP, 0x4 // Assembly we removed to place this hook
			test EAX, EAX // Assembly we removed to place this hook
			jmp Offsets::ptr_Wwise_Log_SetRTPCValueHookJmpBck // Jump back to the original code.
		}
	}

	/// <summary>
	/// Place x86 Assembly hook for logging Wwise::SoundEngine::SetRTPCValue()
	/// </summary>
	void Setup_log_SetRTPCValue() {
		MemUtil::PlaceHook((void*)Offsets::ptr_Wwise_Log_SetRTPCValueHook, hook_log_SetRTPCValue, 5);
	}

	/// <summary>
	/// Console print out for Wwise::SoundEngine::SeekOnEvent()
	/// </summary>
	/// <param name="eventName"> - Name of the event to seek on</param>
	/// <param name="gameObject"> - Object which we want to seek on</param>
	/// <param name="position"> - Position we want to seek to (in milliseconds)</param>
	/// <param name="seekToNearestMarker"> - Should we skip to the nearest marker</param>
	void __stdcall log_SeekOnEvent(char* eventName, AkGameObjectID gameObject, AkTimeMs position, bool seekToNearestMarker) {
		std::cout << "(Wwise) SeekOnEvent: " << eventName << " on object 0x" << std::hex << gameObject << " at time " << (float)(position / 1000) << " seconds. Seek to nearest marker: " << std::boolalpha << seekToNearestMarker << std::endl;
	}

	/// <summary>
	/// x86 Assembly hook to allow us to log Wwise::SoundEngine::SeekOnEvent()
	/// </summary>
	void __declspec(naked) hook_log_SeekOnEvent() {
		__asm {
			push ESP // Save current state of ESP to the stack
			push EAX // Save current state of EAX to the stack

			push[EBP + 0x14] // Seek To Nearest Marker
			push[EBP + 0x10] // Position (in ms)
			push[EBP + 0xC]	// Game Object
			push[EBP + 0x8]	// Event Name
			call log_SeekOnEvent

			pop EAX // Get old EAX
			pop ESP // Get old ESP

			mov ECX, dword ptr[EBP + 0x14] // Assembly we removed to place this hook
			mov EDX, dword ptr[EBP + 0x10] // Assembly we removed to place this hook
			jmp Offsets::ptr_Wwise_Log_SeekOnEventHookJmpBck // Jump back to the original code
		}
	}

	/// <summary>
	/// Place x86 Assembly hook for logging Wwise::SoundEngine::SeekOnEvent()
	/// </summary>
	void Setup_log_SeekOnEvent() {
		MemUtil::PlaceHook((void*)Offsets::ptr_Wwise_Log_SeekOnEventHook, hook_log_SeekOnEvent, 6);
	}

	/// <summary>
	/// Console print out for Wwise::SoundEngine::SetBusEffect()
	/// </summary>
	/// <param name="in_audioNodeID"> - Bus Short ID.</param>
	/// <param name="in_uFXIndex"> - Effect slot index (0-3)</param>
	/// <param name="in_shareSetID"> - ShareSets ID; pass AK_INVALID_UNIQUE_ID (0) to clear the Effect slot</param>
	/// <returns></returns>
	void __stdcall log_SetBusEffect(AkUniqueID in_audioNodeID, AkUInt32 in_uFXIndex, AkUniqueID in_shareSetID) {
		std::cout << "(Wwise) SetBusEffect: On audio bus: 0x" << std::hex << in_audioNodeID << " in slot " << std::dec << in_uFXIndex << " set the bus effect to 0x" << std::hex << in_shareSetID << std::dec << std::endl;
	}

	/// <summary>
	/// x86 Assembly hook to allow us to log Wwise::SoundEngine::SetBusEffect()
	/// </summary>
	void __declspec(naked) hook_log_SetBusEffect() {
		__asm {

			push [EBP+0x10] // Effect ShareSet
			push [EBP+0xC]	// Effect Slot
			push [EBP+0x8]	// Bus Short ID

			call log_SetBusEffect

			mov EAX, 0x27 // Assembly we removed to place this hook
			jmp Offsets::ptr_Wwise_Log_SetBusEffectJmpBck; // Jump back to the original code
		}
	}

	/// <summary>
	/// Place x86 Assembly hook for logging Wwise::SoundEngine::SetBusEffect()
	/// </summary>
	void Setup_log_SetBusEffect() {
		MemUtil::PlaceHook((void*)Offsets::ptr_Wwise_Log_SetBusEffect, hook_log_SetBusEffect, 5);
	}

	/// <summary>
	/// Console print out for Wwise::SoundEngine::CloneBusEffect()
	/// </summary>
	/// <param name="toBus"> - Bus ID to send the effect to</param>
	/// <param name="in_uFXIndex"> - Slot to send the effect to</param>
	/// <param name="fromBus"> - Bus ID to get the effect from</param>
	/// <param name="effectName"> - Name of the effect</param>
	/// <returns></returns>
	void __stdcall log_CloneBusEffect(AkUniqueID toBus, AkUInt32 in_uFXIndex, AkUniqueID fromBus, char* effectName) {
		char* name = effectName;

		if (effectName[0] < 0x41 || effectName[0] > 0x5A || effectName[1] < 0x61 || effectName[1] > 0x7A) {
			name = *(char**)effectName;
		}

		std::cout << "(Wwise) CloneBusEffect: From bus 0x" << std::hex << fromBus << " in slot " << std::dec << in_uFXIndex << " to bus 0x" << std::hex << toBus << std::dec << " with name: " << name << std::endl;
	}

	/// <summary>
	/// x86 Assembly hook to allow us to log Wwise::SoundEngine::CloneBusEffect()
	/// </summary>
	void __declspec(naked) hook_log_CloneBusEffect() {
		__asm {
			push EBX	// Effect Name (Pointer to a pointer)
			push [EBP+0x10] // Bus to copy effect from
			push [EBP+0xC]  // Slot to place effect
			push [EBP+0x8]  // Bus to copy effect to

			call log_CloneBusEffect

			mov EAX, dword ptr ss:[EBP+0x10] // Assembly we removed to place this hook
			mov ECX, dword ptr ss:[EBP+0xC]  // Assembly we removed to place this hook
			jmp Offsets::ptr_Wwise_Log_CloneBusEffectJmpBck // Jump back to the original code
		}
	}


	/// <summary>
	/// Place x86 Assembly hook for logging Wwise::SoundEngine::CloneBusEffect()
	/// </summary>
	void Setup_log_CloneBusEffect() {
		MemUtil::PlaceHook((void*)Offsets::ptr_Wwise_Log_CloneBusEffect, hook_log_CloneBusEffect, 6);
	}
}
#endif