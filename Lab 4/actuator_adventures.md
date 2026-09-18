# Add summary here 



## TT Motor initial observations 
- Default behavior: The motor spins in one direction at a constant speed before stopping

1. Modify the analogWrite() value: 
- Modified the analogWrite(MOTOR_B1A) to 125 -> Motor did not spin anymore and instead made a high-pitched whining noise before stopping (Ran for the same amount of time as the default behavior)
- Modified the analogWrite(MOTOR_B1A) to 1000 -> Motor spun at same speed as default (Maybe max speed is 255 or motor needs more power to spin faster?)

2. Swap the analogWrite() value:
- Modified the analogWrite(MOTOR_B1A) TO 0 & analogWrite(MOTOR_B1B) to 255 -> Motor spun at the same speed as default but in the opposite direction

3. Modify the delay() value:
- Modified the delay() value from 5000 to 10000 -> Motor spun for twice as long as default 
