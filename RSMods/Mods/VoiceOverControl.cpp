#include "VoiceOverControl.hpp"

namespace VoiceOverControl {
	void PlayVoiceOver(VoiceOver voiceOver) {
		WwiseVariables::Wwise_Sound_PostEvent_Char(voiceOver.EventName.c_str(), 0xffffffff, 0, NULL, NULL, 0, NULL, 0);
		WwiseVariables::Wwise_Sound_PostEvent_Char(voiceOver.EventName.c_str(), 0x00001234, 0, NULL, NULL, 0, NULL, 0);

		std::cout << "Played VoiceOver: " << voiceOver.Text << std::endl;
	}

	void PlayVoiceOver(std::string voiceOver) {
		WwiseVariables::Wwise_Sound_PostEvent_Char(voiceOver.c_str(), 0xffffffff, 0, NULL, NULL, 0, NULL, 0);
		WwiseVariables::Wwise_Sound_PostEvent_Char(voiceOver.c_str(), 0x00001234, 0, NULL, NULL, 0, NULL, 0);

		std::cout << "Played VoiceOver: " << voiceOver << std::endl;
	}
}