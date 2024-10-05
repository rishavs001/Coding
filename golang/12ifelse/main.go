package main

import (
	"fmt"
)

func main() {

	fmt.Println("IfElse in golang")

	loginCount := 23
	var result string

	if loginCount < 10 {
		result = "Regular User"
	} else if loginCount > 10 {
		result = "Watch Out"
	} else {
		result = "Exactly 10 logincount"
	}
	fmt.Println(result)

	if 9%2 == 0 {
		fmt.Println("Even")
	} else {
		fmt.Println("Odd")
	}

	if num := 3; num < 10 {
		fmt.Println("Num is less thn 10")
	} else {
		fmt.Println("Num not less than 10")
	}

	// if err != nil{

	// }
}
