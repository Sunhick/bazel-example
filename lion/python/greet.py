#!/usr/bin/python

class Greet(object):
    """ Hello world greeting library in python """
    def __init__(self, name):
        self.name = name

    def greet(self):
        print("Hello world! Greetings ", self.name)


if __name__ == '__main__':
    g = Greet("Sunil")
    g.greet()
