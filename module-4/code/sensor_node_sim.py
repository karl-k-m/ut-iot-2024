import time
import paho.mqtt.client as mqtt


# Callback when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    if rc == 0:
        print("Connected successfully.")
    else:
        print("Connection failed with code", rc)


# Set up temperature simulation parameters
temperature = 20
increase = True

# Create an MQTT client instance
client = mqtt.Client()

# Assign the on_connect callback
client.on_connect = on_connect

# Attempt to connect to the MQTT broker
try:
    client.connect("localhost", 1883, 60)
except Exception as e:
    print(f"Failed to connect to MQTT broker: {e}")
    exit(1)

client.loop_start()

while True:
    print("Temperature:", temperature)
    # Ensure data is sent as a string
    client.publish("sensor_node", str(temperature))
    time.sleep(0.5)  # Interval between messages

    # Adjust the temperature
    if increase:
        temperature += 1
    else:
        temperature -= 1

    # Check for temperature bounds
    if temperature == 30:
        increase = False
    elif temperature == 20:
        increase = True
