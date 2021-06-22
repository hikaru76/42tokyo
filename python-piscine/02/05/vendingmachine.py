import sys

class Vendingmachine:
	def __init__(self, name: str, drink_list: list):
		self.name = name
		self.drink_list = drink_list
	
	def __str__(self):
		return (self.name)

	def sell(self, beverage_name: str):
		for li in self.drink_list:
			# print(li.name, beverage_name, end='\n\n')
			if li.name == beverage_name:
				print('\nHere is your ' + beverage_name + '!')
				return 
		print('Sorry! I do not have ' + beverage_name + '...')

	def ask(self):
		print('Hello, what would you like?')
		name = sys.stdin.readline()
		self.sell(name)