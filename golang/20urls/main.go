package main

import (
	"fmt"
	"net/url"
)

const myurl string = "https://rishavs001.github.io/learn?about=rishav&coursename=reactjs"

func main() {
	fmt.Println("Welcome to url in golang")

	fmt.Println(myurl)
	result, _ := url.Parse(myurl)

	fmt.Println(result.Scheme)
	fmt.Println(result.Host)
	fmt.Println(result.Path)
	fmt.Println(result.Port())
	fmt.Println(result.RawQuery)

	qparams := result.Query()
	fmt.Printf("Type of query params are %T\n", qparams)

	fmt.Println(qparams["coursename"])

	for _, val := range qparams {
		fmt.Println("Params are: ", val)
	}

	//constructing a url
	partsOfUrl := url.URL{
		Scheme:  "https",
		Host:    "rishavs001.github.io",
		Path:    "/admin",
		RawPath: "user=rishav",
	}
	anotherUrl := partsOfUrl.String()
	fmt.Println(anotherUrl)
}
