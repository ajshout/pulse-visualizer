#include <cstddef>
#pragma once

// ===== Configuration Section =====

// Window Configuration
namespace Config {
  // Window settings
  constexpr int DEFAULT_WINDOW_WIDTH = 720;
  constexpr int DEFAULT_WINDOW_HEIGHT = 480;
  constexpr float DEFAULT_SPLITTER_POS = 0.65f;  // 65% of window width
  
  // Colors (RGBA as floats)
  struct Colors {
    // Catppuccin Mocha theme colors
    static constexpr float BACKGROUND[4] = {24.0f/255.0f, 24.0f/255.0f, 37.0f/255.0f, 1.0f};     // Mantle
    static constexpr float GRID[4] = {49.0f/255.0f, 50.0f/255.0f, 68.0f/255.0f, 1.0f};        // Surface0
    static constexpr float VISUALIZER[4] = {203.0f/255.0f, 166.0f/255.0f, 247.0f/255.0f, 1.0f};  // Mauve
    static constexpr float SPLITTER[4] = {49.0f/255.0f, 50.0f/255.0f, 68.0f/255.0f, 1.0f};    // Surface0 (same as grid)
    static constexpr float TEXT[4] = {205.0f/255.0f, 214.0f/255.0f, 244.0f/255.0f, 1.0f};  // Text (Catppuccin Mocha Text)
  };
  
  // Audio Configuration
  namespace Audio {
    constexpr int SAMPLE_RATE = 44100;
    constexpr int CHANNELS = 2;
    constexpr size_t BUFFER_SIZE = 128 * 1024;  // 128KB buffer
    constexpr size_t DISPLAY_SAMPLES = 2000;    // Number of samples to display
    constexpr int FFT_SIZE = 4096;              // FFT size for frequency analysis
    constexpr float FFT_SMOOTHING_FACTOR = 0.2f;  // Controls FFT visualization smoothness
    constexpr float FFT_MIN_DB = -60.0f;        // Minimum dB level for FFT display
    constexpr float FFT_MAX_DB = 10.0f;         // Maximum dB level for FFT display
    constexpr float FFT_MIN_FREQ = 10.0f;       // Minimum frequency to display
    constexpr float FFT_MAX_FREQ = 20000.0f;    // Maximum frequency to display
    constexpr float FFT_SLOPE_CORRECTION = 4.5f; // dB/octave slope correction
    constexpr float FFT_RISE_SPEED = 500.0f;     // Speed multiplier for rising FFT values (units/second)
    constexpr float FFT_FALL_SPEED = 50.0f;      // Speed multiplier for falling FFT values (units/second)
  }
  
  // Lissajous Configuration
  namespace Lissajous {
    constexpr int POINTS = 500;                // Number of points to store
    constexpr int SPLINE_SEGMENTS = 10;         // Number of segments for spline interpolation
  }
  
  // Oscilloscope Configuration
  namespace Oscilloscope {
    constexpr float AMPLITUDE_SCALE = 0.5f;     // Use 50% of window height for amplitude
    constexpr size_t MIN_CYCLE_COUNT = 1;       // Minimum number of cycles to display
    constexpr size_t MAX_CYCLE_COUNT = 8;       // Maximum number of cycles to display
  }
  
  // PulseAudio Configuration
  namespace PulseAudio {
    constexpr int MAX_LENGTH = 2048;            // Maximum buffer length
    constexpr int TARGET_LENGTH = 512;          // Target buffer length
    constexpr int MIN_REQ = 128;                // Minimum request size
    constexpr int FRAGMENT_SIZE = 512;          // Fragment size
    constexpr const char* DEFAULT_SOURCE = "bluez_output.FC_A8_9A_33_89_81.1.monitor";
  }

  // Font Configuration
  namespace Font {
    constexpr const char* DEFAULT_FONT = "Location/To/Font/OfChoice.ttf";
  }
}

// Legacy constants for compatibility
constexpr int LISSAJOUS_POINTS = 1000;
constexpr int LISSAJOUS_SIZE = 200; 
