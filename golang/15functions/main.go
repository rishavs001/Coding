package main

import "fmt"

func main() {
	fmt.Println("Functions in golang")
	greater()
	greater2()
	result := adder(3, 5)
	fmt.Println("Result is ", result)

	proRes, str := proadder(2, 8, 7, 4, 5, 9)
	fmt.Println(str, " Pro Result is ", proRes)

}

func greater() {
	fmt.Println("Method 1")
}

func greater2() {
	fmt.Println("Method 2")
}

func adder(valOne int, valTwo int) int {	//passing arguments
	return valOne + valTwo
}

func proadder(values ...int) (int, string) {	// multiple return
	total := 0

	for _, val := range values {
		total += val
	}
	return total, "Hii Rishav"
}
