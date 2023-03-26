#include "nucleotide_count.h"
#include <unordered_set>

namespace nucleotide_count {

    std::map<char, int> count (std::string dna_strand) {
        assert_is_valid_dna_strand(dna_strand);
        std::map<char, int> base_counts { {'A', 0}, {'C', 0}, {'G', 0}, {'T', 0} };
        for (auto& c : dna_strand)
            base_counts[c]++;
        return base_counts;
    }

    void assert_is_valid_dna_strand(std::string dna_strand) {
        std::unordered_set<char> valid_nucleotides {'A', 'C', 'T', 'G'};
        // inefficient to check valid nucleotides each time
        // could implement this as a set difference instead
        for (auto& c : dna_strand)
            if (valid_nucleotides.find(c) == valid_nucleotides.end())
                throw std::invalid_argument("Invalid DNA sequence. A sequence must only contain the bases 'A', 'C' 'T' or 'G'.");
    }           

}  // namespace nucleotide_count
