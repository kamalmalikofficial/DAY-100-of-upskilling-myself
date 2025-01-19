let arr1 =[1,2,3,4,5];

//lenght function
console.log(arr1.lenght);

//push function
arr1.push("kamal");
console.log(arr1);

//pop function

arr1.pop();
console.log(arr1);
console.log(arr1.pop()); //  output the element which is 
//                           removed from the array

//shift function     use to remove element in the front
arr1.shift();
console.log(arr1);

// unshift func     use to put the element in the front
arr1.unshift("kamal malik");
console.log(arr1);

// slicing a arrr   slice('ini","fin"); 
console.log(arr1.slice(1,2))
// start from the 1sr index and before 2

for(var i in arr1){
    console.log(i," ",arr1[i]);
//  console.log(i+" "+arr[i]);
}

//map function MAP(value,"index,"arr");
let arr2 = arr1.map((value)=>{
    return value;
})
console.log(arr2);

let arr3 = arr1.filter((val)=>{
    return val>3;
})
console.log(arr3);

// dates in javascript
var dt = new Date();
console.log(dt);
console.log(dt.getDate());
console.log(dt.toLocaleString('en-US', {timeZone: 'UTC'}));

// some Math functions
console.log(Math.random()); //random number bw 0 and 1
console.log(Math.floor(5.2));
console.log(Math.ceil(5.2));
console.log(2**2);
console.log(Math.sqrt(4));



