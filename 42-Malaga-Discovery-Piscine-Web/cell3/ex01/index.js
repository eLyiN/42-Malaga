function ClickHeightGrow() {
    ClickBgChange();
    var element = document.getElementById('thediv');
    element.style.height = (element.offsetHeight + 10) + "px";
    element.style.width = (element.offsetWidth + 10) + "px";
    if (element.style.height > "420"){
        element.style.height = "200px";
        element.style.width = "200px";
    }
}
function ClickBgChange() {
    var element = document.getElementById('thediv');
    if(element.classList.contains ("bg_red")) {
        element.classList.remove ("bg_red");
        element.classList.add ("bg_green");
    }
    else if (element.classList.contains ("bg_green")){
        element.classList.remove ("bg_green");
        element.classList.add ("bg_blue");
    }
    else if (element.classList.contains ("bg_blue")){
        element.classList.remove ("bg_blue");
        element.classList.add ("bg_red");
    }
}
function Mouseout() {
    var element = document.getElementById('thediv');
    if (element.style.height > "200"){
    element.style.height = (element.offsetHeight - 5) + "px";
    element.style.width = (element.offsetWidth - 5) + "px";
    ReverseBgChange();
    }
}
function ReverseBgChange() {
    var element = document.getElementById('thediv');
    if(element.classList.contains ("bg_red")) {
        element.classList.remove ("bg_red");
        element.classList.add ("bg_blue");
    }
    else if (element.classList.contains ("bg_green")){
        element.classList.remove ("bg_green");
        element.classList.add ("bg_red");
    }
    else if (element.classList.contains ("bg_blue")){
        element.classList.remove ("bg_blue");
        element.classList.add ("bg_green");
    }
}