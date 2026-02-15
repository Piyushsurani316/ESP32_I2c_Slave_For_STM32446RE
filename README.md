# ESP32_I2c_Slave_For_STM32446RE
STM32F446RE Master code is available at https://github.com/Piyushsurani316/STM32F446RE_I2c_MASTER_USING_HAL.git
STM32 work on 3.3V. So, use only slave which work on 3.3v. pullup register not required because stm32 and esp32 both have pullup and parallel pullup is around 4.1 ohm enough.
