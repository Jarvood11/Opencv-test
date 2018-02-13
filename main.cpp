#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main()
{
	/*cv::Mat image = cv::imread("test3.jpg");//Bad  test data*/
	//cv::Mat image = cv::imread("image.jpg");
	//cv::Mat image = cv::imread("photo24.jpg");
	cv::Mat image = cv::imread("foto.jpg");
	cv::imshow("Test opencv", image);
	cv::waitKey();

	return 0;
}
