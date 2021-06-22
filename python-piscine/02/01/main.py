import beverage

def main():
	product = beverage.Product("coke", 120, "very yammy juice")
	print(product.__str__(), end='\n\n')
	product.print_attr()
	print()

	beve = beverage.Beverage(product.name, product.price, product.description, 3.0)
	beve.print_attr()

if __name__ == '__main__':
	main()