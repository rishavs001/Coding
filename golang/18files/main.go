package main

import (
	"fmt"
	"io"
	"os"
)

func main() {
	fmt.Println("Welcome to files in golang")
	content := "This is the content to be put in the file"
	file, err := os.Create("./mylocogofile.txt")

	// if err != nil {
	// 	panic(err)
	// }
	checkNilErr(err)

	length, err := io.WriteString(file, content)
	checkNilErr(err)

	fmt.Println("Length is: ", length)
	defer file.Close()
	readFile("./mylocogofile.txt")
}

func readFile(filename string) {
	databyte, err := os.ReadFile(filename)
	checkNilErr(err)

	fmt.Println("Content of the file is: ", string(databyte))
}

func checkNilErr(err error) {
	if err != nil {
		panic(err)
	}
}
