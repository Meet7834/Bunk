const btn = document.querySelector("#btn1");
const output = document.querySelector("#outputTxT")
const output2 = document.querySelector('#outputTxT2')

let per;


btn.addEventListener("click", function() {
    let target = 75;
    let bunk = 0;
    let extAtn = 0;
    // console.log(target);
    var atn = parseInt(document.querySelector("#AttendedB").value);
    var total = parseInt(document.querySelector("#TotalB").value);
    target = parseInt(document.querySelector("#targetAtd").value);

    // console.log(target);

    if (isNaN(target)) {
        target=75;
    }

    // console.log(atn);
    // console.log(total);

    per = (atn / total) * 100;

    // console.log(per);

    if (per >= target) {
        while (per >= target) {
            bunk = bunk + 1;
            total = total + 1;
            per = (atn / total) * 100;
            // console.log(bunk)
        };
        bunk--;
        total--;
        per = (atn / total) * 100;

        output.innerHTML = `You can bunk ${bunk} classes.`;
        output2.innerHTML =  `After that your attendence will be ${per.toFixed(2)}.`;

    } else {
        while (per < target){
            atn++;
            extAtn++;
            total++;    
            per = (atn/total) * 100;
        }
        per = (atn/total) * 100;
        output.innerHTML = `${extAtn} classes lagani padegi.`;
        output2.innerHTML =  `After that your attendence will be ${per.toFixed(2)}.`;


    }

    
    // const Tlbunk = document.createElement('h3');
    // Tlbunk.innerHTML = `You can bunk ${bunk} classes.`;
    // console.log(Tlbunk);
    // document.body.appendChild(Tlbunk)
});