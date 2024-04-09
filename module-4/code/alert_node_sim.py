# Simulator for alert node

# Running this code sends a ignore temperature signal ("ignore_temp" on topic "ignore").

import paho.mqtt.client as mqtt
import time

# Callback when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    if rc == 0:
        print("Connected successfully.")
    else:
        print("Connection failed with code", rc)

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

client.publish("ignore", "ignore_temp")
