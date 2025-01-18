// day 1 of jsvascript

// 1. Variables

var x= 10;
var c = 'a';

let y = 30;  // this can be changed in future
const z = 30;  // this will never change
// types of variables

var x = 20;
var string = "kamal malik";
var arr1 = [2,3,4,5];

// output in javascript
console.log(x);
console.log(arr1);

var str1 ="kamal";
var str2 = "malik";
console.log(str1+" "+str2+" is coding !");
/* in javascript there are two type of data's  one is primitive -- int,
string,bool,null  and seconf is primitive -- objects*/

//objects

var obj1={name:"kamal",age:18};
obj1.age= 19;

console.log(obj1);
console.log(obj1.age);

// amaxing output
console.log(str1+x);
console.log(str2+arr1); // here we get malik1,2,3 cause the arr was converted into the string implicitly

console.log(11+9*2);
// console.log("kamal"*2); --> error

if(2>3){
    console.log("true");
}else{
    console.log("false");
}

// else if ladder is same as c++
// switch staement

let s= "DTU";
switch(s){
    case"dtu":
    console.log("DTU in lower case");
    break;

    case"DTU":
    console.log("DTU in upper font");
    break;

    default:
        console.log(" its is a diffrent ");
}
// loops in js;
for(var i = 0;i<11;i++){
    console.log(i*5); // always use next line
}

let obj2 ={name:"kamal",surname:"malik",age:18,salary:"1cr"};
for(var i in obj2){
    console.log(i+" : "+obj2[i]);
}

let arr2 = [1,2,3,4,5,6,7];
for(var i in arr2){
    console.log(arr2[i]);
}
// dont need to set the lenght of arr2

//while loop are also 
var c = 3;
while(c>0){
    console.log(c);
    c--;
} 

// Function in javascript

console.log("function in javascript");
function add(a,b){
    console.log(a+b);
}
add(2,3);
// function need to be declare before calling  it as same rule as in other languages

//stings in js
let str3 = "Delhi technological university";
console.log(str3);
console.log(str3.length);
console.log(str3.slice(0,20));
console.log(str3.toUpperCase());
console.log(str3.replace("D","T"));
console.log(str3.replace("d","T"));
// if there in is no " d", then nothing happen

//loops in array
let arr3 = [1,2,3,4,5,6,7,8,9];
for(var i in arr3){
    console.log(arr3[i]);
}