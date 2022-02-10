# Test plan

### Consider the swing equation 

>𝑀 (𝑑^2 𝛿)/(ⅆ𝑡^2 )=𝑃𝑚−𝑃𝑒

>𝑀 (𝑑^2 𝛿)/(ⅆ𝑡^2) = 𝑃𝑚−𝑃𝑚𝑎𝑥𝑆𝑖𝑛𝛿

>(𝑑^2 𝛿)/(ⅆ𝑡^2) = (𝑃𝑚−𝑃 𝑚𝑎𝑥 𝑆𝑖𝑛𝛿)/𝑀   (1)

### Writing Equation (1) in the form of two differential equations

>(𝑑𝛿^2)/𝑑𝑡=𝑤 (2) 𝑑𝑤/𝑑𝑡=(𝑃𝑚−𝑃 𝑚𝑎𝑥 𝑆𝑖𝑛𝛿)/𝑀  (3)

>𝐶𝑜𝑛𝑠𝑖𝑑𝑒𝑟 𝐼𝑛𝑖𝑡𝑖𝑎𝑙 𝑉𝑎𝑙𝑢𝑒𝑠 𝛿_0,𝑤_0  & 𝑆𝑡𝑒𝑝 𝑆𝑖𝑧𝑒 𝑎𝑠 𝛥𝑡 𝑖𝑛 𝑒𝑞 (2)&(3) 

### Write the differential equations

>𝑑𝛿/𝑑𝑡|= 𝑤_0=𝐷1 (4)

>𝑑𝑤/𝑑𝑡=(𝑃𝑚−𝑃 𝑚𝑎𝑥 𝑆𝑖𝑛𝛿)/𝑀=𝐷2 (5)

### By using the initial values obtained in the equations (4)  & (5),  

#### We can write the predicated values as

>𝛿^𝑝=𝛿^0+𝐷1𝛥𝑡 & 𝑤^𝑝=𝑤_0+𝐷2𝛥𝑡 (6)

### Considering the predicated values write another set of differential equations 

>𝑑𝛿/𝑑𝑡=𝑤^𝑝=𝐷1𝑝 (7)  

>𝑑𝑤/𝑑𝑡=(𝑃𝑚−𝑃 𝑚𝑎𝑥 𝑆𝑖𝑛𝛿^𝑝)/𝑀=𝐷2𝑝 (8) 

### So, using the intial values  𝛿_0  𝑎𝑛𝑑 𝑤_0  the values obtained in the equation (4)(5)(7)(8), write the value of 𝛿 and 𝑤 

>𝑤ℎ𝑖𝑐ℎ 𝑎𝑟𝑒 𝛿_1  𝑎𝑛𝑑 𝑤_1

>𝛿_1=𝛿_0+((𝐷1+𝐷1𝑝)/2)𝛥𝑡      

> 𝑤_1=𝑤_0+((𝐷2+𝐷2𝑝)/2)𝛥𝑡

#### Here again 𝛿_1 and 𝑤_1  acts as the intial values of sucessive steps.



// Notes : Test Plan
* For every feature, define a test case
This test case should contain
    * How to run that feature
    * Define expected behaviour
    * Capture the actual result - after the final result

* Its done in Excel Sheeet or Table - look at the markdown syntax and all
*  This all should be in the table ID, Description of Test case, Input values, Expected Output, Actual Output. 


