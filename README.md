# HMRO Test Cases Generator

This is a generator for test cases for the SPOJ problem HMRO - Help the Military Recruitment Office!

https://www.spoj.com/problems/HMRO/

If you have any suggestion don't hesitate to email me tmakrine@gmail.com

## HOW TO USE:

### Linux:

Compile the file GENERATOR.cpp by the command:
``` g++ -o GENERATOR GENERATOR.cpp ```

In order to use the generator execute the file GENERATOR in terminal by the command

``` ./GENERATOR t n1 m1 p1 n2 m2 p2 [other n m p] ```

Where t is the number of TEST CASES
n1 (and all n) is the number of PESEL codes and MROs
m1 (and all m) is the number of CLOSED MROs
p1 (and all p) is the number of PESELs

#### EXAMPLE1:

COMMAND:
```
./GENERATOR 1 5 2 3 
```
OUTPUT:
```
1
5
84072519923 IZO3
84060890706 BOQ6
84091971087 ZSL8
84021818710 AKW8
84072091989 TDK9
2
IZO3 TDK9
TDK9 BOQ6
3
84060890706
84091971087
84021818710
```


#### EXAMPLE2:

COMMAND:
```
./GENERATOR 2 6 1 4 10 3 5
```

OUTPUT:
```
2
6
84111958720 RHD2
84051434539 ZOI9
84122064245 ODR2
84061454383 TBA0
84112437817 GHQ7
84113073434 SVD3
1
ZOI9 SVD3
4
84061454383
84111958720
84122064245
84111958720

10
84060922614 DZT3
84072236143 WZW0
84093020450 PIH3
84112697339 IWY6
84121764873 OKL9
84052755486 WKB9
84100534202 UKQ9
84060364518 CMM6
84110234946 NCI0
84010995438 IVO1
3
CMM6 PIH3
OKL9 IVO1
DZT3 WKB9
5
84100534202
84100534202
84093020450
84010995438
84100534202
```
