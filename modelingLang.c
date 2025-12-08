#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* randomFromArr(char* inputArr[], int size) {
    return inputArr[rand() % size];
}

int main() {
    srand((unsigned)time(NULL)); //reset random value

    char* determiners[] = {"a", "the", "my", "your", "our"};
    int detSize = sizeof(determiners) / sizeof(determiners[0]);
    char* randomDet = randomFromArr(determiners, detSize);

    // Nouns
    char* nouns[] = {"boy", "giraffe", "pizza", "elephant", "sandwich", "robot"};
    int nounSize = sizeof(nouns) / sizeof(nouns[0]);
    char* randomNoun = randomFromArr(nouns, nounSize);

    // Adjectives
    char* adjectives[] = {"green", "silly", "old", "tired", "little", "wise"};
    int adjectivesSize = sizeof(adjectives) / sizeof(adjectives[0]);
    char* randomAdjective = randomFromArr(adjectives, adjectivesSize);

    // Verbs
    char* verbs[] = {"jumps", "sleeps", "eats", "thinks", "runs", "sits down"};
    int verbsSize = sizeof(verbs) / sizeof(verbs[0]);
    char* randomVerb = randomFromArr(verbs, verbsSize);

    // Adverbs
    char* adverbs[] = {"quickly", "sadly", "slowly", "sleepily", "gracefully"};
    int adverbsSize = sizeof(adverbs) / sizeof(adverbs[0]);
    char* randomAdverb = randomFromArr(adverbs, adverbsSize);

    // Prepositions
    char* prepositions[] = {"near", "over", "under", "beside", "in front of"};
    int prepositionsSize = sizeof(prepositions) / sizeof(prepositions[0]);
    char* randomPreposition = randomFromArr(prepositions, prepositionsSize);

    printf("Simple sentence: %s %s %s %s\n", randomDet, randomNoun, randomVerb, randomAdverb);

    printf("Complex sentence: %s %s %s %s %s %s %s %s\n", randomDet, randomAdjective, randomNoun,randomVerb,randomAdverb, randomPreposition,randomDet,randomNoun);

    return 0;
}
