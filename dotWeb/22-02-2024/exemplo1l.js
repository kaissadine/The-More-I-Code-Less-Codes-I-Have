const frm = document.querySelector("#formulario1");
const resp = document.querySelector("h3");
const limpar = document.getElementById("limpar")
frm.addEventListener("submit", (e) => {
    
    const nome = frm.inNome.value;
    const idade = frm.inIdade.value;
    if (idade<=17) {
        resp.innerText = `Olá ${nome}, você é menor de idade e tem ${idade} anos`;
    }
    else if (idade>=100) {
        resp.innerText = `Olá ${nome}, você tá morto`;
    }else{
        resp.innerText = `Olá ${nome}, você é maior de idade e tem ${idade} anos`;
    
    }
    e.preventDefault();

})
limpar.addEventListener("click", () => {
    resp.innerText = "";
    frm.inNome.value ="";
    frm.inIdade.value ="";
    frm.inNome.focus();
})

