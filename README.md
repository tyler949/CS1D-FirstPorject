for (int i = 0; i < winesOffered; i++)
        {
            getline(inFile, wineTypeName);
            inFile >> wineYear;
            inFile.ignore(1000, '\n');
            inFile >> wineCost;
            inFile.ignore(1000, '\n');
            temp.setYear(wineYear);
            temp.setCost(wineCost);
            temp.setName(wineTypeName);

            tempWineTypeVector.pushback(temp);

        }
