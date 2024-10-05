package main

import (
	"fmt"
	"math/rand"
)

func main() {
	fmt.Println("Switch case in golang")
	// rand.Seed(time.Now().UnixNano())	//depriciated
	diceNum := rand.Int31n(5) + 1
	fmt.Println("Value of dice is: ", diceNum)

	switch diceNum {
	case 1:
		fmt.Println("Dice val is 1")
	case 2:
		fmt.Println("Dice val is 2")
	case 3:
		fmt.Println("Dice val is 3")
		// fallthrough	// also go to next case
	case 4:
		fmt.Println("Dice val is 4")
		// fallthrough	// also go to next case
	case 5:
		fmt.Println("Dice val is 5")
	default:
		fmt.Println("What was that!!!!")
	}

}
