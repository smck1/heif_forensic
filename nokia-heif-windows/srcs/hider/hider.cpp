/* This file is part of Nokia HEIF library
 *
 * Copyright (c) 2015-2018 Nokia Corporation and/or its subsidiary(-ies). All rights reserved.
 *
 * Contact: heif@nokia.com
 *
 * This software, including documentation, is protected by copyright controlled by Nokia Corporation and/ or its
 * subsidiaries. All rights are reserved.
 *
 * Copying, including reproducing, storing, adapting or translating, any or all of this material requires the prior
 * written consent of Nokia.
 */

/** This file includes some examples about using the reader API and writer API (example7)
 *  Note that binary execution fails if proper .heic files are not located in the directory */

#include <algorithm>  // std::min_element
#include <fstream>
#include <iostream>
#include <map>
#include "heifreader.h"
#include "heifwriter.h"

using namespace std;
using namespace HEIF;

void ex();


/// Access and read a cover image
void ex()
{
    auto* reader = Reader::Create();
    // Input file available from https://github.com/nokiatech/heif_conformance
    const char* filename = "C003.heic";
    if (reader->initialize(filename) == ErrorCode::OK)
    {
        FileInformation info;
        reader->getFileInformation(info);

        // Find the item ID
        ImageId itemId;
        reader->getPrimaryItem(itemId);

        uint64_t memoryBufferSize = 1024 * 1024;
        uint8_t* memoryBuffer     = new uint8_t[memoryBufferSize];
        reader->getItemDataWithDecoderParameters(itemId, memoryBuffer, memoryBufferSize);

        // Feed 'data' to decoder and display the cover image...

        delete[] memoryBuffer;
    }
    else
    {
        cout << "Can't find input file: " << filename << ". "
             << "Please download it from https://github.com/nokiatech/heif_conformance "
             << "and place it in same directory with the executable." << endl;
    }

    Reader::Destroy(reader);
}



int main()
{
	ex();
}
