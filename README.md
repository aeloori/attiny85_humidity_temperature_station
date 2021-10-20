# attiny85_humidity_temperature_station
Display humidity and temperature values on a 16*2 lcd display by using a I2C module and dht11 humidity sensor
This project help to output humidity and temperature values of the ambient // surroundings out on 16*2 lcd display using I2C interface.
Low cost Dht11 hummidity/Temperature sensor is used.


library used for dht11 is provided by  ------------> Adafruit Industries
And the attiny harware package used is diy attiny hardware package.
The board manager URL is https://raw.githubusercontent.com/sleemanj/optiboot/master/dists/package_gogo_diy_attiny_index.json

--------------------------------------------------------------------------------------------------------------------------------------
* 8 Mhz internal crystal Used
* LTO is enabled
* BOD is restricted to 2.7v

-------------------------------------------------------------------------------------------------------------------------------------

* SDA pin from I2C interface board is connected to Sda pin of microcontroller // Pin no. 5
* SCL pin from I2c interface board is connected to SCL pin of microcontroller // Pin no. 7
* Output pin of Dht11 sensor pin is connected to pin no. 3 of the microcontroller.

-------------------------------------------------------------------------------------------------------------------------------------
