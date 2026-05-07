/*
  For the audioplayer to work, a micro-sd card must be
  inserted fortmatted with FAT32
*/

#include <MeMCore.h>
#include <MeAudioPlayer.h>

MeAudioPlayer AudioPlayer(4);

void setup() {
    AudioPlayer.PlayerInit();
    AudioPlayer.stopRecording();
    AudioPlayer.stopMusic();
    AudioPlayer.setMusicPlayMode(0);
    // set volume to 80%
    AudioPlayer.setMusicVolume(80);
    // record for 10 seconds to simpleRecording
    AudioPlayer.startRecordingFileName("simpleRecording");
    delay(10000);
    AudioPlayer.stopRecording();
    // play the recording
    AudioPlayer.playMusicFileName("simpleRecording");
    delay(10000);
    
    AudioPlayer.stopMusic();
}

void loop() {
}
