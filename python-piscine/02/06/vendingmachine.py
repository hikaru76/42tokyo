import sys
import random

class Vendingmachine:
	def __init__(self, name: str, drink_list: list):
		self.name = name
		self.drink_list = drink_list
	
	def __str__(self):
		return (self.name)

	def sell(self, beverage_name: str):
		for li in self.drink_list:
			if li.name == beverage_name:
				print('\nHere is your ' + beverage_name + '!')
				return 
		print('Sorry! I do not have ' + beverage_name + '...')
		self.random_recommend()

	def greet(self):
		print("Hi, I am Spica.")

	def display(self):
		for drink in self.drink_list:
			print(drink)

	def random_recommend(self):
		tmp = random.randint(1, len(self.drink_list)) - 1
		print("I recommend...")
		print(self.drink_list[tmp])

	def ask(self):
		self.greet()
		self.display()
		print('What would you like?')
		name = sys.stdin.readline()
		self.sell(name)