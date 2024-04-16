// function ok(){
//     let baba = "bhaukaali";
//      function inner(){
//         let baba2 = "hehe";
//         function inner2(){
//             console.log(baba);
//             console.log(baba2);
//         }
//         return inner2;
         
//      }
//      return inner;
// }

// let r = ok();
// let r2 = r();
// r2();



// function count (){
//  let count = 0;

//  return {
//             getCount : function(){
//                 console.log(count);
//             }
//             ,

//             increment : function (){
//                 count++;
//             }
// ,
//             decrement : function(){
//                 count--;
//             }




//  }




// }

// let ok = count();
// ok.increment();
// ok.getCount();






// function human( age123,name123)
// {
//     this.age = age123;
//     this.name = name123;
// }


// let anshul1  = new human(21 , 'Anshul');


// capital letter if at start of a function then it is definately a constructor function

// new function decided if a function is constructor function or not '

// if a function is called with new keyword then it is constructor function 

// let anshul =  {
//     name:"hello"
//     ,
//     age:21
// };

// every object made from constructor function will have its .__proto__ as User . prototype and basically parent of user . prototype is object . prototype ...


// so for every object made using new and functional constructor will have .__proto__ as User prototype

// to make a function accessible for all user prototype (user defined un hard coded objects) we can put the function inside user . protype 



// function Hello (a,b,c){
//     this.FN=a;
//     this.LN=b;
//     this.age=c;
//     this.vegeta = function(){
//         // age=age+1;
//         console.log("galick gun");
//     };
//     this.ok;
//     // console.log(ok);
//     console.log(a + b + c);
// }

// Hello.prototype.goku = function(){
//     console.log("kamehameha");
// }


// let ok = new Hello("anshul", "joshi","22");
// ok.goku();
// ok.vegeta();
// ok.goku();


// class Saiyan{
// constructor(FN, LN, Power_level){
//     this.FirstN=FN;
//     this.LastN=LN;
//     this.Power_level_of=Power_level;
//     this.btao_kon_hai=function(){
//         console.log(this.FirstN);
//     }
// }

// }


// class human extends Saiyan{
// constructor(f,l,p,s){
//     super(f,l,p);
    
//     this.kitna_human=s;
//     console.log(f+l+p+s);
// }
// }


// let gohan = new human("gohan","son","100000","50%");
// gohan.btao_kon_hai();


// Arrow function 

// let add = (a,b)=>a+b;
// console.log(add(2,3));

// let cube = a=>a*a*a

// console.log(cube(3));


// let obj ={
//     a:10,
//     fn: function(){
//         function sam(){
//             console.log(this);
//         }
//         sam();
//     }

// }
// obj.fn();



// let  p = new  Promise(function(resolve, reject){
//     let data ="hello";
//     let error = "mymy boii error hogya"
    
//    // resolve(data);
//     reject(error);

// })


// let ok =  function(data){
//     console.log(data);
// }

// let fail  = function(data){
//     console.log('error' + data);
// }



// p.then(ok);

// p.catch(fail);


// let pp = function(){
// console.log("calling me");
// }


// var data ="image selected";


// let ok_2 = function (data){
//     console.log(data);
//     data="I am applying filter";
//     setTimeout(pp,2000);
// }

// let ok_4 = function (data){
//     console.log(data);
//     data="i am adding caption to ${filter}...";
//     setTimeout(pp,4000);
// }


// let p  = new Promise(function(res,rej){
   
//     res(data);
    
    

// })

// p.then(ok_2);
// p.then(ok_4);





// let step1 = function(){
//     return new Promise( function (resolve, reject){
//             console.log("image selected");
//             setTimeout( function(){resolve("filtered image");},4000  );

//     })
// };



// let step2 = function (){
//     return new Promise(function(res,rej){
//        setTimeout(function(){
//         res("filtered the image")
//        }, 2*1000);

//     });
// }

// let step3 = function(){
//     return new Promise(function(res,rej){
//         console.log("caption dedo");
//         setTimeout(function(){
                
//                 res("caption laga rha hu");
//         },4*1000);
//     });
// } 


// let step4 = function(){
//     return new Promise(function(res, rej){
//         console.log("chalo me uploading ........");
//         setTimeout(function(){
//                 res("hogya boss");
//         },2*1000);

//     });
// }

// step1().then( function(data){
//         console.log("filtering image");
//         return step2();
// }).then(function (data){
//             console.log(data);
//             return step3();
// }).then(function(data){
//                     console.log(data);
//                     return step4();
// }).then(function(data){
//     console.log(data);
// });






// async function s(){
//     return 10;
// }

// s().then(function(data){
//     console.log("hii" + data);
// });


// console.log(history)


// let h1 = document.getElementsByTagName("h2");
// h1[0].style.color = "red";


// h1[0].style.cssText=`color : yellow;
//                     background-color : red`;


                                            
// let ok = document.getElementsByClassName("og");

// for(let i of  ok){
// i.style.cssText=`color : yellow;`
// }


// let a  = document.querySelectorAll(".og");
// a[1].style.color="red";
// a[0].style.color="yellow";

// img  = ["https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Google_Chrome_icon_%28February_2022%29.svg/1920px-Google_Chrome_icon_%28February_2022%29.svg.png","https://www.livemint.com/lm-img/img/2023/09/27/600x338/g_1695775234559_1695775258675.jpeg","https://storage.googleapis.com/gweb-uniblog-publish-prod/images/Google_IO_Bard_Keyword_Header_Op.width-2000.format-webp.webp","https://media.wired.co.uk/photos/606d9a3ba876dd2203a639aa/16:9/w_2990,h_1682,c_limit/wired-uk-google-watching.jpg"]


// let a  = document.querySelector(".og");

// document.querySelector(".og").setAttribute("class", "anshul");
// console.log(document.querySelector(".anshul"));


// let j = 4*Math.random();
// console.log(j);
// let id  = setInterval(function(){ 
//     let j = 4*Math.random();  
//      a.setAttribute("src",img[j]);   
//     console.log("Hii");
//     i++;
//     if(i==4){
//         i=0;
//     }
// }, 1000);

// setTimeout(function(){
//     clearInterval(id);
// },12000)



let prev_class= document.querySelector(".anshul").getAttribute("class");

//note I added miltiple classes by just separating classes with spaces
document.querySelector(".anshul").setAttribute("class", `${prev_class} ok hii`);

let h2 = document.querySelector(".anshul");




//to add new class name (multiple classes) without keeping track of prev
// class names use class list

h2.classList.add("jijij", "okok", "ji");

console.log(h2.getAttribute("class"));

//toggle :- if class is added then removes that class and if not added then add it 
console.log(h2.classList.toggle("jijij"));

//contains -->returns true if class is there
//but contains uses just one class at a time
console.log(h2.classList.contains("ji"));


let baap1 = document.querySelector(".baap");
let childs = baap1.children;
childs[0].innerHTML = "<h>Anshul joshi</h>";
console.log(childs[0].children);
// console.log(childs[0].parentElement);
console.log(childs[1].nextElementSibling);
console.log(childs[1].previousElementSibling);

let p  = document.createElement("p");
p.innerText="hello i'm P";
// 1)Append child accepts just one argument, ONLY HTML ACCEPTED
//2) Append accepts multiple arguments , STRING ALSO ALLOWED TAGS also allowed
console.log(childs[0].innerHTML);
childs[0].appendChild(p);
childs[0].append("kokokok");
childs[0].prepend(p);
// childs[0].remove(p);
console.log(childs[0].innerHTML);



