# Elektrisk Salmesykkel - Version: [1.2]

Date: 2025-01-04

Name: Benjamin Dehli

Profile: [store.dehlimusikk.no][Gumroad profile]

## Included formats

- Decent Sampler

## Release notes

### Version 1.2 (2025-01-04)

- Removed amplitude envelope for one shot samples

### Version 1.1 (2024-02-15)

- Improved crossfades for loop points

### Version 1.0 (2024-02-11)

- First version released

## Description

A Yamaha L-20D electric harmonium / reed organ with some added features

## Technical specification

|                       | Sample rate | Bit depth | Channels   | Number of files | File size  |
|----------------------:|------------:|----------:|------------|----------------:|-----------:|
|  **Samples (Reeds)**  |      48 kHz |    24 bit | 2 (stereo) |             183 |  855.60 MB |
|  **Samples (Noise)**  |      48 kHz |    24 bit | 2 (stereo) |             366 |   63.60 MB |
| **Impulse responses** |      48 kHz |    24 bit | 2 (stereo) |               2 |    2.50 MB |

## Instrument presets

This sample library includes 2 presets, the regular preset "ElektriskSalmesykkel" (best in most cases) and the looped preset "ElektriskSalmesykkel (Looped)". For the regular version, each sample are approximately 16 seconds long. For the looped version, to achieve the best possible loop point, some of the loops are short and some are longer. Some of the loops will however have some minor artifacts. For best audio quality, you should always use the regular version. And only if you have notes held for more than 16 seconds, use the the looped version.

## User Interface

|![Overview](/Screenshots/elektrisk-salmesykkel.png)|
|:--:|
|Overview|

The user interface offers precise control over every aspect of the instrument and effects.
Explore parameters to refine your sound, including control over the wind supply, reeds, tremulant, mechanical noise and reverb.

### Wind and reed settings

|![Wind and reed controls](/Screenshots/mixer.png)|
|:--:|
|Wind and reed controls|

- Normal / Full (Swell)
  - Controlled by a knee lever on the original instrument and with the modulation wheel in the plugin
  - Gradually open up the swell chambers
- Soft / Loud (Loudness)
  - Determines how much air flows through the reeds
- Diapason / Close / Viola
  - Diapason: Permanently opens the swell chamber for the diapason reeds
  - Close: Both swell chambers is closed
  - Viola: Permanently opens the swell chamber for the viola reeds

### Tremulant

|![Controls for the vibrato settings](/Screenshots/tremulant.png)|
|:--:|
|Controls for the tremulant settings|

Tremulant varies the wind supply to the reeds. The controls enable you to adjust the tremulant with the desired depth and rate.

- Normal / Tremulant (Depth)
  - Adjust the depth to introduce subtle or pronounced tremulant effect
- Slow / Fast (Rate)
  - Determines the speed of the tremulant effect

### Noise

|![Noise controls](/Screenshots/noise.png)|
|:--:|
|Noise controls|

- Silent / Noisy
  - The amount of mechanical noise from the keys when pressed down and released

### Reverb

|![Controls for the room reverb impulse response](/Screenshots/reverb.png)|
|:--:|
|Controls for the room reverb impulse response|

The reverb are achieved using carefully crafted impulse responses of a Chase Bliss Audio & Meris CXM 1978 reverb pedal. The short reverb, evoking the intimacy of a small room (home), and the long reverb (church), enveloping your sound in the vastness of a spacious environment.

- On / Off
  - Turns the reverb on and off
- Church / Home
  - Switches between a long/big room (church) reverb and a short/small room (home) reverb
- Dry / Wet
  - Mix between direct signal (dry) and reverb signal (wet)

[Gumroad profile]: https://store.dehlimusikk.no/
