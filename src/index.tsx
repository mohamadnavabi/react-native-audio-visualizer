const AudioVisualizer = require('./NativeAudioVisualizer').default;

export function multiply(a: number, b: number): number {
  return AudioVisualizer.multiply(a, b);
}
