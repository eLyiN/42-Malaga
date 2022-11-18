var fir_nb;
var sec_nb;
var oper;
var calc;
var form;

window.onload = function (){
    calc = document.querySelector("#calc");
    fir_nb = document.querySelector("#first_nb");
    sec_nb = document.querySelector("#second_nb");
    oper = document.querySelector("#operator");
}
setInterval(function() {
    alert('Please use me..')
}, 30000);

function NbValid(firstnb, secondnb) {

    var fir_int = parseInt(firstnb, 10);
    var sec_int = parseInt(secondnb, 10);
    if (fir_int >= 0 && sec_int >= 0)
    return (0);
    else
    return (1);
}
function Calculate(){
    var first_num;
    var secon_num;
    fn = Number(fir_nb.value);
    sn = Number(sec_nb.value);
    if(NbValid(fn, sn) == 1)
    {
        alert("Error:(");
        return(-1);
    }
    switch(oper.value)
    {
        case ('+'):
            Result(fn + sn);
        break;
        case ('-'):
            Result(fn - sn);
        break;
        case ('*'):
            Result(fn * sn);
        break;
        case ('/'):
            if(sn == 0)
            Result("It's over 9000!");
            else 
            Result(fn / sn);
        break;
        case ('%'):
            if(sn == 0)
            Result("It's over 9000!");
            else
            Result(fn % sn);
        break;
    }
}
function Result(result){
    console.log(result);
    alert(result);
}