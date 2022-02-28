<h1 text align='center'>pseudo-numbers</h1></br>

<p>gerador de números pseudoaleatorios feito na linguagem C!</b>

<details>
  <summary> <b>Explicação</b></summary></br>
  <li>A função rand() utiliza um algoritmo determinístico</br>
  <li>Cada valor é calculado como função matemática do anterior</br>
   > a implementação usa variável de estado global;
   > o seu valor é alterada cada vez que geramos num novo número</br>
  <li>A sequência gerada repete-se eventualmente após um período muito longo
</details>

<strong><li>Números pseudoaleatorios:</strong> https://pt.m.wikipedia.org/wiki/Gerador_de_n%C3%BAmeros_pseudoaleat%C3%B3rios

<i><strong>Modo de uso:</strong></i></br>

    git clone https://github.com/UserDevz/pseudo-numbers
    cd pseudo-numbers
    gcc pseudoaleatorios.c -o <novo nome>
    ./<novo nome>
