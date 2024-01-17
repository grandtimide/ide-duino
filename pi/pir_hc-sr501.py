import RPi.GPIO as IO
from gpiozero import MotionSensor
import time

pir = MotionSensor(17)

try:
    print("Attente du capteur PIR")
    while True:
        if pir.motion_detected:
            print("| Mouvement detecté |")
        else:
            print("| Pas de mouvement. |")
        time.sleep(5)

except KeyboardInterrupt:
    print("| Arrêt du script. |")
