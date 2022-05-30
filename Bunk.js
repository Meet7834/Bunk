const btn = document.querySelector("#btn1");
const output = document.querySelector("#outputTxT")

let per;


btn.addEventListener("click", function() {
    let bunk = 0;
    var atn = parseInt(document.querySelector("#AttendedB").value);
    var total = parseInt(document.querySelector("#TotalB").value);

    // console.log(atn);
    // console.log(total);

    per = (atn / total) * 100;

    console.log(per);

    if (per >= 75) {
        while (per >= 75) {
            bunk = bunk + 1;
            total = total + 1;
            per = (atn / total) * 100;
            // console.log(bunk)
        };
        bunk--;

        // if (per >= 75){
        //     cout << "You can bunk " <<  bunk << " classes" << endl;
        //     cout << "And Your Attendence will be: " << setprecision(4) << per << " %"<< endl;
        // }
        // else if (per < 75){
        //     per = (atn*100) / (total-1);
        //     cout << "You can bunk " <<  bunk-1 << " classes" << endl;
        //     cout << "And Your Attendence will be: " << setprecision(4) << per << " %"<< endl;
        // }
    };

    output.innerHTML = `You can bunk ${bunk} classes.`;
    // const Tlbunk = document.createElement('h3');
    // Tlbunk.innerHTML = `You can bunk ${bunk} classes.`;
    // console.log(Tlbunk);
    // document.body.appendChild(Tlbunk)
});