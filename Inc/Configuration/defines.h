/*** BOARD ***/
#define ARM_MATH_CM4
#define STM32F4_DISCOVERY
#define STM32F4xx
#define ADC_SAMPLE_RATE_IN_HERTZ 31315

/*** LCD DISPLAY ***/
#define LCD_WIDTH 16
#define LCD_HEIGHT 2
#define HD44780_RS_PORT GPIOC
#define HD44780_RS_PIN GPIO_PIN_14
#define HD44780_E_PORT GPIOA
#define HD44780_E_PIN GPIO_PIN_1
#define HD44780_D4_PORT GPIOB
#define HD44780_D4_PIN GPIO_PIN_8
#define HD44780_D5_PORT GPIOB
#define HD44780_D5_PIN GPIO_PIN_6
#define HD44780_D6_PORT GPIOB
#define HD44780_D6_PIN GPIO_PIN_4
#define HD44780_D7_PORT GPIOD
#define HD44780_D7_PIN GPIO_PIN_7

/*** FFT ***/
#define FFT_NUMBER_OF_SAMPLES 2048
#define FFT_SIZE (FFT_NUMBER_OF_SAMPLES / 2)
#define FFT_IFFT_FLAG 0
#define FFT_DO_BIT_REVERSE 1
//#define FFT_BIN_TO_FREQUENCY_MULTIPLIER (ADC_SAMPLE_RATE_IN_HERTZ / FFT_SIZE)
#define FFT_BIN_TO_FREQUENCY_MULTIPLIER 30.52

/*** GUITAR ***/
#define SOUND_NAME_E "E"
#define SOUND_FREQUENCY_LOW_E 330.00
#define SOUND_NAME_A "A"
#define SOUND_FREQUENCY_A 440.00
#define SOUND_NAME_D "D"
#define SOUND_FREQUENCY_D 587.00
#define SOUND_NAME_G "G"
#define SOUND_FREQUENCY_G 784.00
#define SOUND_NAME_B "B"
#define SOUND_FREQUENCY_B 988.00
#define SOUND_FREQUENCY_HIGH_E 1319.00
