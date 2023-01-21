console.log("First Program");
let a=20;
let div;
for(let div=1;div<=20;div++)
{
    if(div%3==0)
    {
        console.log(div,"Fizz");
    }
    else if(div%5==0)
    {
        console.log(div,"Buzz");
    }
    else if (div%3==0 && div%5==0)
    {
        console.log(div,"FizzBuzz");
    }
    else 
    {
        console.log(div);
    }
}