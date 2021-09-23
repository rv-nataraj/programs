import datetime
import time

start = datetime.datetime.now()

#Your statements here
time.sleep(2)

end = datetime.datetime.now()

print("Time: " + str((end - start).microseconds) + " ms")

print("hello")