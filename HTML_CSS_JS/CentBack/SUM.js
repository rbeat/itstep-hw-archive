/**
 * Created by 303-02 on 25.02.14.
 */
var ticket = Number(prompt("ВЭДЫ БИЛЭТЫК:"));
var firstSum = 0;
var secondSum = 0;
for(var i=0; i<6; i++){
    if(i<3){
        firstSum += ticket%10
    }else{
        secondSum += ticket%10
    }
    ticket = Math.floor(ticket/10)
}
if(firstSum == secondSum){
    alert("^_^")
}else{
    alert("O_o")
}