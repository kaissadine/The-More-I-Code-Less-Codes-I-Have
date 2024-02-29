const frm = document.querySelector("form");
const resp1 = document.querySelector("h3");
const resp2 = document.querySelector("h4");
const texto = "kdaksokasokowkeqw"
frm.addEventListener("submit", (e) => {
    const modelo = frm.inModel.value;
    const preço = Number(frm.inPreco.value);
    e.preventDefault();
    const entrada = preço/2 ;
    const saldo = ( entrada/12);
    const formatado = entrada.toLocaleString('pt-BR', { style: 'currency', currency: 'BRL' });
    const formatados =saldo.toLocaleString('pt-BR', { style: 'currency', currency: 'BRL' });
    resp1.innerText = `o Modelo do veículo é: ${modelo}`;
    resp2.innerText = `o valor de entrada será ${formatado} e ficará com 12 parcelas de ${formatados}`;
    
});console.log(texto)
//
//parseInt