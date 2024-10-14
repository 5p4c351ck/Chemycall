#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>


static char *base_url 	= "https://pubchem.ncbi.nlm.nih.gov/rest/pug/";
static char *url; 

int api_call(char *url)
{
  CURL *curl = curl_easy_init();
  if(curl) {
    CURLcode res;
    curl_easy_setopt(curl, CURLOPT_URL, url);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    return res;
  }
	return -1;
}

