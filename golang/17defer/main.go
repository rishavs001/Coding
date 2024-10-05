package main

import "fmt"

func main() {
	defer fmt.Println("Hello") // prints later due to defer
	fmt.Println("One")
	defer fmt.Println("Two")
	defer fmt.Println("Three")
	fmt.Println("Four")
	fmt.Println("World")

	myDefer()
}

func myDefer() {
	for i := 1; i <= 5; i++ {
		defer fmt.Print(i, " ")
	}
	fmt.Println("")
}
