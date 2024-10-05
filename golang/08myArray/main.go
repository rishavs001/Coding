package main

import "fmt"

func main() {
	fmt.Println("Welcome to array in GoLang")

	var fruitList [5]string

	fruitList[0] = "apple"
	fruitList[1] = "tomato"
	fruitList[2] = "peach"

	fmt.Println("Fruit list is: ", fruitList)
	fmt.Println("Fruit list is: ", len(fruitList))

	var vegList = [3]string{"potato", "beans", "mushroom"}
	fmt.Println("Vegy list is: ", vegList)
	fmt.Println("Vegy list is: ", len(vegList))

}
