# Memory manipulation
 
 A função stack_example() aloca uma variável inteira na stack e um array de caracteres de 1024 bytes também na stack. Já a função heap_example() aloca um inteiro na heap usando malloc() e um array de caracteres de 1024 bytes na heap também usando malloc(). A diferença entre as duas alocações é que a stack é gerenciada automaticamente pelo compilador, enquanto a alocação na heap requer o uso explícito de malloc().

A escolha entre stack e heap em C deve ser feita com base no tamanho e escopo dos dados que estão sendo usados, bem como na velocidade necessária para a alocação e liberação de memória.

https://en.wikipedia.org/wiki/Stack_overflow#:~:text=The%20most%2Dcommon%20cause%20of,of%20infinite%20recursion%20in%20C.
