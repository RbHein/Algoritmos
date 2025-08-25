/* PROBLEMA DETECTADO: O código original apresentava uma Run Condition, onde duas Threads estavam acessando e modificando a variável 
compartilhada (conta) ao mesmo tempo, o que estava causando inconsistência no resultado após a execução.

Isso acontecia porque a operação de incremento não era atômica, permitindo que as Threads interferissem uma na outra. 

Para resolver o problema, foi implementado um Mutex, que sincroniza o acesso à variável, o que garante 
que apenas uma Thread por vez possa modificar seu valor. Isso evita o evento da Run Condition e garante que o resultado
final seja corrigido */

#include <pthread.h>
#include <stdio.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER; // SINCRONIZAÇÃO

pthread_t tid1, tid2; // DECLARANDO THREADS

long conta = 0;

//THREAD 1
void *t1(void *arg) {
    long i;
    for (i = 0; i < 1000000; i++) {
        pthread_mutex_lock(&mutex);
        conta += 5;
        pthread_mutex_unlock(&mutex);
    }
    printf("Fim t1\n");
    return NULL;
}

// THREAD 2
void *t2(void *arg) {
    long i;
    for (i = 0; i < 1000000; i++) {
        pthread_mutex_lock(&mutex);
        conta += 2;
        pthread_mutex_unlock(&mutex);
    }
    printf("Fim t2\n");
    return NULL;
}

int main() {

    printf("RESOLUCAO DE RUN CONDITION\n");

    pthread_create(&tid1, NULL, t1, NULL);
    pthread_create(&tid2, NULL, t2, NULL);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    printf("\nValor de Conta = %li\n", conta);

    pthread_mutex_destroy(&mutex);

    return 0;
}
