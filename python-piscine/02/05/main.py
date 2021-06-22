import vendingmachine
import beverage

def main():
	coke = beverage.Product("coke", 130, "very yammy juice")
	pocari = beverage.Product("pocari", 150, "sports drink")
	tea = beverage.Product("tea", 110, "milk tea")
	water = beverage.Product("water", 100, "water")
	vend = vendingmachine.Vendingmachine("sapporo", [coke, pocari, tea, water])
	vend.ask()

if __name__ == '__main__':
	main()