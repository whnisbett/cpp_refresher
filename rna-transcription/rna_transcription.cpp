#include "rna_transcription.h"
#include <unordered_map>

namespace rna_transcription {

    std::unordered_map<char, char> DNA_TO_RNA {
        {'A', 'U'},
        {'T', 'A'},
        {'C', 'G'},
        {'G', 'C'}
    };
    
    char to_rna(char dna_nucleotide) {
        return DNA_TO_RNA[dna_nucleotide];
    }

    std::string to_rna(std::string dna_sequence) {
        std::string rna_sequence {};
        for (auto& dna_nucleotide : dna_sequence)
            rna_sequence += DNA_TO_RNA[dna_nucleotide];
        return rna_sequence;
    }

}  // namespace rna_transcription