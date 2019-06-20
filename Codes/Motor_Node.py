#######################################################################
# Test Code For Motors 
# Wall-E Project
# V0.0
#######################################################################

# Import Required Libs
import RPi.GPIO as GPIO
from time import sleep
 
# Set PI Numbering Mode  
GPIO.setmode(GPIO.BOARD)

# Set Motors Pins 
Motor1A = 16
Motor1B = 18

# Set Pin Direction 
GPIO.setup(Motor1A,GPIO.OUT)
GPIO.setup(Motor1B,GPIO.OUT)

# For debugging 
print "Turning motor on"

#Generate PWM Signal using SW
while True:
    GPIO.output(Motor1A,GPIO.HIGH)
    # Delay for 200 mSec. 
    sleep(0.02)
    GPIO.output(Motor1A,GPIO.LOW)
    # Delay for 800 mSec. 
    sleep(0.08)

 
# For debugging 
print "Stopping motor"
GPIO.output(Motor1E,GPIO.LOW)
 
GPIO.cleanup()