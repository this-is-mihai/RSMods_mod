/*
	Plugin Registration

	AudioKinetic Plugins:

		Source Plugins:
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)2, 0, 100, (AkCreatePluginCallback*)0x01f55909, (AkCreateParamCallback*)0x01f5552d)   // Sine https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_sine_source_factory_8h_ab36cdff56a4114c8dc7bd778f3c458a6.html#ab36cdff56a4114c8dc7bd778f3c458a6
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)2, 0, 101, (AkCreatePluginCallback*)0x01f552ed, (AkCreateParamCallback*)0x01f552cd)   // Silence https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_silence_source_factory_8h_abe4e09287a6a4625ee1f318cbe284cbe.html#abe4e09287a6a4625ee1f318cbe284cbe
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)2, 0, 102, (AkCreatePluginCallback*)0x01fc44d7, (AkCreateParamCallback*)0x01fc3941)   // Tone https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_tone_source_factory_8h_a556f52a9a328dee0693c7898220b987d.html#a556f52a9a328dee0693c7898220b987d
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)2, 0, 200, *(AkCreatePluginCallback*)0x01f11435, *(AkCreateParamCallback*)0x01f11535) // Audio Input https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_audio_input_source_factory_8h_a525cc107623ec9df67be8be92a2bd5db.html#a525cc107623ec9df67be8be92a2bd5db

		Effect Plugins:
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   105, (AkCreatePluginCallback*)0x01f49cd6, (AkCreateParamCallback*)0x01f48f37) // Parametric EQ https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_parametric_e_q_f_x_factory_8h_ab3c24f987d4eea8d2054252da4a2b4e4.html#ab3c24f987d4eea8d2054252da4a2b4e4
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   106, (AkCreatePluginCallback*)0x01f184fa, (AkCreateParamCallback*)0x01f182f6) // Delay https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_delay_f_x_factory_8h_a945fa489838c6c5ff34ba144fd8ee5a7.html#a945fa489838c6c5ff34ba144fd8ee5a7
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   108, (AkCreatePluginCallback*)0x01f125a4, (AkCreateParamCallback*)0x01f117e5) // Compressor https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_compressor_f_x_factory_8h_a8a1aefc973bf36d4c3645a54b4296787.html#a8a1aefc973bf36d4c3645a54b4296787
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   109, (AkCreatePluginCallback*)0x01f19c61, (AkCreateParamCallback*)0x01f18e6a) // Expander https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_expander_f_x_factory_8h_af1ab755771ef101eb2d197870b6b5559.html#af1ab755771ef101eb2d197870b6b5559
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   110, (AkCreatePluginCallback*)0x01f4bb16, (AkCreateParamCallback*)0x01f4a006) // Peak Limiter https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_peak_limiter_f_x_factory_8h_a2fff1d80430c06021f9a9f8c33a82374.html#a2fff1d80430c06021f9a9f8c33a82374
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   115, (AkCreatePluginCallback*)0x01f32348, (AkCreateParamCallback*)0x01f2727d) // Matrix Reverb https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_matrix_reverb_f_x_factory_8h_aa42114eb41275a4a54e11b3481728a85.html#aa42114eb41275a4a54e11b3481728a85
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   118, (AkCreatePluginCallback*)0x01f516ef, (AkCreateParamCallback*)0x01f4d8ff) // Roomverb https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_room_verb_f_x_factory_8h_a1bdaea8632abbc2caa1c475b39e4f845.html#a1bdaea8632abbc2caa1c475b39e4f845
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   125, (AkCreatePluginCallback*)0x01f1ad5e, (AkCreateParamCallback*)0x01f1a11d) // Flanger https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_flanger_f_x_factory_8h_a90cda97c241c27d9a060aa7f184a905e.html#a90cda97c241c27d9a060aa7f184a905e
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   126, (AkCreatePluginCallback*)0x01f1d8fe, (AkCreateParamCallback*)0x01f1d154) // Guitar Distortion https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_guitar_distortion_f_x_factory_8h_ac982da86fbbeb5675e781f5290e94545.html#ac982da86fbbeb5675e781f5290e94545
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   127, (AkCreatePluginCallback*)0x01f13d1f, (AkCreateParamCallback*)0x01f12ad8) // Convolution Reverb https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_convolution_reverb_f_x_factory_8h_acbefb0c6db1e3837e8d7816602eaf2d8.html#acbefb0c6db1e3837e8d7816602eaf2d8
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   129, (AkCreatePluginCallback*)0x01f33e23, (AkCreateParamCallback*)0x01f334fd) // Meter https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_meter_f_x_factory_8h_a7ed0c7ff5c97a9b0b757f1d0b6ddaa7a.html#a7ed0c7ff5c97a9b0b757f1d0b6ddaa7a
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   130, (AkCreatePluginCallback*)0x01fc35b1, (AkCreateParamCallback*)0x01fc2ce3) // Time Stretch https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_time_stretch_f_x_factory_8h_a50a41e0d1788223367ae2c50bca929dc.html#a50a41e0d1788223367ae2c50bca929dc
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   131, (AkCreatePluginCallback*)0x01fc6bc4, (AkCreateParamCallback*)0x01fc66c2) // Tremolo https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_tremolo_f_x_factory_8h_a25a1a5e47e5aa0071cac9f2ce8b0ffc4.html#a25a1a5e47e5aa0071cac9f2ce8b0ffc4
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   132, (AkCreatePluginCallback*)0x01f4c583, (AkCreateParamCallback*)0x01f4bef8) // Recorder https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_recorder_f_x_factory_8h_abf3480b8d1398f8fe4ed546159790807.html
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   135, (AkCreatePluginCallback*)0x01fba060, (AkCreateParamCallback*)0x01fb9a21) // Stereo Delay https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_stereo_delay_f_x_factory_8h_ac6d5f65f9f7986c072de8d170c19ba9a.html#ac6d5f65f9f7986c072de8d170c19ba9a
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   136, (AkCreatePluginCallback*)0x01f20d74, (AkCreateParamCallback*)0x01f2052c) // Pitch Shifter https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_pitch_shifter_f_x_factory_8h_af59100e964c89255422d5d7d1f32b220.html#af59100e964c89255422d5d7d1f32b220
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 0,   138, (AkCreatePluginCallback*)0x01f232f2, (AkCreateParamCallback*)0x01f22929) // Harmonizer https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=_ak_harmonizer_f_x_factory_8h_a659f62ff7931a0745deb532a4967092a.html#a659f62ff7931a0745deb532a4967092
			Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 255, 110, (AkCreatePluginCallback*)0x01febc77, (AkCreateParamCallback*)0x01feae79) // Custom Plugin? Non-registered Audio Kinetic Comapany ID

	iZotope Effect Plugins (Tones):
		Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 259, 4, (AkCreatePluginCallback*)0x01fcfa19, (AkCreateParamCallback*)0x01fcf5d1) // iZotope Trash Delay https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=i_z_trash_delay_f_x_factory_8h_a03ced9816a8acacc6b67d2e6406e0e67.html#a03ced9816a8acacc6b67d2e6406e0e67
		Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 259, 5, (AkCreatePluginCallback*)0x01fd6921, (AkCreateParamCallback*)0x01fd6501) // iZotope Trash Dynamics https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=i_z_trash_dynamics_f_x_factory_8h_a3d9e8fffaf23fee2a3afaa43753f9bf7.html#a3d9e8fffaf23fee2a3afaa43753f9bf7
		Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 259, 6, (AkCreatePluginCallback*)0x01fd95b0, (AkCreateParamCallback*)0x01fd8e0c) // iZotope Trash Filters https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=i_z_trash_filters_f_x_factory_8h_a97114961181f3b4dace0ea4c9e73f041.html#a97114961181f3b4dace0ea4c9e73f041
		Wwise::SoundEngine::RegisterPlugin((AkPluginType)3, 259, 9, (AkCreatePluginCallback*)0x01fe22ba, (AkCreateParamCallback*)0x01fe1a11) // iZotope Trash Multiband Distortion https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=i_z_trash_multiband_distortion_f_x_factory_8h_a270360b0053eddb74cafb461763ff2cb.html#a270360b0053eddb74cafb461763ff2cb
*/