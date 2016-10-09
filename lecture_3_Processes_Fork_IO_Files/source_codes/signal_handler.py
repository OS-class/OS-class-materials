#! /usr/bin/python

import signal
import sys
import time

def signal_handler(signal, frame):
    print "Hello Class!"
    print 'You pressed CTRL+C!'
    print "Exiting!"
    sys.exit(0)

signal.signal(signal.SIGINT, signal_handler)
print 'It is CTRL+C handler code, press CTRL+C'
#print 'It is a SIGKILL signal handler'
while True:
    time.sleep(1)
